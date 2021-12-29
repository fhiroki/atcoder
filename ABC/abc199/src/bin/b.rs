use std::vec;

use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        a: [usize; n],
        b: [usize; n],
    }
    let mut v = vec![0; 1010];
    for i in 0..n {
        for j in a[i]..=b[i] {
            v[j] += 1;
        }
    }
    println!("{}", v.iter().filter(|&x| *x == n).count());
}
