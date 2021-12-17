use proconio::{fastout, input};
use std::collections::HashSet;

#[fastout]
fn main() {
    input! {
        n: usize
    }
    let mut set = HashSet::new();
    for a in 2..=((n as f64).sqrt().ceil() as usize) {
        let mut p = a * a;
        while p <= n {
            set.insert(p);
            p *= a;
        }
    }
    println!("{}", n - set.len());
}
