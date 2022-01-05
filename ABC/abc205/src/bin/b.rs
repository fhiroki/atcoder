use proconio::{fastout, input};
use std::collections::HashSet;

#[fastout]
fn main() {
    input! {
        n: usize,
        a: [u32; n]
    }
    let mut set = HashSet::new();
    for i in 0..n {
        set.insert(a[i]);
    }
    if set.len() == n {
        println!("Yes");
    } else {
        println!("No");
    }
}
