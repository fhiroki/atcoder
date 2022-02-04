use proconio::{fastout, input};
use std::collections::HashMap;

#[fastout]
fn main() {
    input! {
        n: usize,
        s: [String; n],
    }
    let mut map = HashMap::new();
    for i in 0..n {
        *map.entry(&s[i]).or_insert(0) += 1;
    }
    println!("{}", map.iter().max_by(|a, b| a.1.cmp(&b.1)).unwrap().0);
}
