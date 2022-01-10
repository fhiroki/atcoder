use proconio::{fastout, input};
use std::cmp::max;
use std::collections::HashMap;

#[fastout]
fn main() {
    input! {
        n: usize,
        k: usize,
        c: [u32; n]
    }
    let mut map = HashMap::new();
    for i in 0..k {
        *map.entry(c[i]).or_insert(0) += 1;
    }
    let mut ans = map.len();
    for i in k..n {
        ans = max(ans, map.len());
        *map.entry(c[i]).or_insert(0) += 1;
        let a = map.entry(c[i - k]).or_insert(0);
        if *a == 1 {
            map.remove(&c[i - k]);
        } else {
            *a -= 1;
        }
    }
    ans = max(ans, map.len());
    println!("{}", ans);
}
