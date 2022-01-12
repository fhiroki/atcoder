use proconio::{fastout, input};
use std::cmp::min;

#[fastout]
fn main() {
    input! {
        n: usize,
        m: usize,
        a: [i32; n],
        mut b: [i32; m]
    }
    b.sort();
    let mut ans = 1e9 as i32;
    for i in 0..n {
        let j = match b.binary_search(&a[i]) {
            Ok(x) => x,
            Err(x) => x,
        };
        ans = min(ans, (a[i] - b[min(j, m - 1)]).abs());
        ans = min(ans, (a[i] - b[j.checked_sub(1).unwrap_or(0)]).abs());
    }
    println!("{}", ans);
}
