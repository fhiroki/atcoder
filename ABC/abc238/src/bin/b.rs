use std::cmp::max;
use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        a: [i32; n]
    }
    let mut v = vec![0];
    for i in 0..n {
        v.push((v[i] + a[i]) % 360);
    }
    v.sort();
    v.push(360);
    let mut ans = 0;
    for i in 0..=n {
        ans = max(ans, v[i + 1] - v[i]);
    }
    println!("{}", ans);
}
