use std::vec;

use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize
    }
    let mut v = vec![0; n];
    for _ in 0..n-1 {
        input! {
            a: usize,
            b: usize
        }
        v[a - 1] += 1;
        v[b - 1] += 1;
    }
    v.sort();
    if v[n - 1] == n - 1 {
        println!("Yes");
    } else {
        println!("No");
    }
}
