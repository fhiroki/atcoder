use proconio::{fastout, input};
use std::cmp::{max, min};

#[fastout]
fn main() {
    input! {
        n: usize,
        t: [(u32, u32); n]
    }
    let mut ans: u32 = 1000000;
    for i in 0..n {
        let sum = t[i].0 + t[i].1;
        ans = min(ans, sum);
        for j in i + 1..n {
            let sum = max(t[i].0, t[j].1);
            ans = min(ans, sum);
            let sum = max(t[i].1, t[j].0);
            ans = min(ans, sum);
        }
    }
    println!("{}", ans);
}
