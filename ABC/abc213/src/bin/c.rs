use proconio::{fastout, input};
use std::collections::HashSet;

#[fastout]
fn main() {
    input! {
        _h: usize,
        _w: usize,
        n: usize,
        ab: [(u32, u32); n]
    }
    let mut set1 = HashSet::new();
    let mut set2 = HashSet::new();
    for i in 0..n {
        set1.insert(ab[i].0);
        set2.insert(ab[i].1);
    }
    let mut v1: Vec<u32> = set1.into_iter().collect();
    v1.sort();
    let mut v2: Vec<u32> = set2.into_iter().collect();
    v2.sort();

    for i in 0..n {
        let a = v1.binary_search(&ab[i].0).unwrap() + 1;
        let b = v2.binary_search(&ab[i].1).unwrap() + 1;
        println!("{} {}", a, b);
    }
}
