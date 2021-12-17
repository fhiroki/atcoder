use proconio::{fastout, input};
use std::cmp::min;

#[fastout]
fn main() {
    input! {
        n: usize
    }
    let mut ans = 1e9 as u32;
    for _ in 0..n {
        input! {
            a: u32,
            p: u32,
            x: u32
        }
        if x > a {
            ans = min(ans, p);
        }
    }

    if ans == 1e9 as u32 {
        println!("-1");
    } else {
        println!("{}", ans);
    }
}
