use proconio::{fastout, input};
use std::cmp::*;

#[fastout]
fn main() {
    input! {
        n: usize,
        a: [usize; n]
    }
    let mut ans = 0;
    for l in 0..n {
        let mut mi = a[l];
        for r in l..n {
            mi = min(mi, a[r]);
            ans = max(ans, (r - l + 1) * mi);
        }
    }
    println!("{}", ans);
}
