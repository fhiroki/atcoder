use std::vec;

use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        k: usize,
    }
    let mut a = vec![];
    for i in 0..n {
        input! {
            ai: u64,
        }
        a.push((i, ai, k / n));
    }
    a.sort_by(|x, y| x.1.cmp(&y.1));
    for i in 0..k % n {
        a[i].2 += 1;
    }
    a.sort_by(|x, y| x.0.cmp(&y.0));
    for i in 0..n {
        println!("{}", a[i].2);
    }
}
