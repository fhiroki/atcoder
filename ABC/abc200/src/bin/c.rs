use proconio::{fastout, input};
use std::collections::HashMap;

#[fastout]
fn main() {
    input! {
        n: usize,
        a: [usize; n]
    }
    let mut map = HashMap::new();
    for i in 0..n {
        *map.entry(a[i] % 200).or_insert(0) += 1;
    }
    let mut ans: u64 = 0;
    for (_, v) in map {
        ans += v * (v - 1) / 2;
    }
    println!("{}", ans);
}
