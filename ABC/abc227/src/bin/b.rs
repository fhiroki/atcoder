use proconio::{fastout, input};
use std::collections::HashSet;

#[fastout]
fn main() {
    input! {
        n: usize,
        s: [u32; n]
    }
    let mut set = HashSet::new();
    for a in 1..200 {
        for b in 1..200 {
            let area = 4 * a * b + 3 * a + 3 * b;
            set.insert(area);
        }
    }
    println!("{}", s.iter().filter(|s| !set.contains(s)).count());
}
