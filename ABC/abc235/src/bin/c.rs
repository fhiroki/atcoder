use proconio::{fastout, input};
use std::collections::HashMap;

#[fastout]
fn main() {
    input! {
        n: usize,
        q: usize,
        a: [u32; n],
        xk: [(u32, usize); q]
    }
    let mut map = HashMap::new();
    for (i, ai) in a.iter().enumerate() {
        map.entry(ai).or_insert(vec![]).push(i as i32 + 1);
    }
    for i in 0..q {
        let x = xk[i].0;
        let k = xk[i].1 - 1;
        let idx = match map.get(&x) {
            Some(v) => *v.get(k).unwrap_or(&-1),
            None => -1,
        };
        println!("{}", idx);
    }
}
