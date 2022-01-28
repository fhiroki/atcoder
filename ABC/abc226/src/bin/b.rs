use proconio::{fastout, input};
use std::collections::HashSet;

#[fastout]
fn main() {
    input! {
        n: usize
    }
    let mut set = HashSet::new();
    for _ in 0..n {
        input! {
            l: usize,
            a: [u64; l]
        }
        set.insert(a);
    }
    println!("{}", set.len());
}
