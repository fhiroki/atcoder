use proconio::{fastout, input};
use std::collections::HashMap;

#[fastout]
fn main() {
    input! {
        n: usize,
        a: [u64; n]
    }
    let mut map = HashMap::new();
    for i in 0..n {
        *map.entry(a[i]).or_insert(0) += 1;
    }
    let mut ans = n * (n - 1) / 2;
    for (_, v) in map {
        ans -= v * (v - 1) / 2;
    }
    print!("{}", ans);
}
