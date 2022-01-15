use proconio::{fastout, input};
use itertools::Itertools;
use std::collections::HashSet;

#[fastout]
fn main() {
    input! {
        s: String,
        k: usize
    }
    let mut set = HashSet::new();
    for perm in s.chars().permutations(s.len()) {
        set.insert(perm.iter().join(""));
    }
    let mut v : Vec<String> = set.into_iter().collect();
    v.sort();
    println!("{}", v[k - 1]);
}
