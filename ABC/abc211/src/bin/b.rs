use proconio::{fastout, input};
use std::collections::HashSet;

#[fastout]
fn main() {
    let mut set = HashSet::new();
    for _ in 0..4 {
        input! {
            s: String,
        }
        set.insert(s);
    }
    if set.len() == 4 {
        println!("Yes");
    } else {
        println!("No");
    }
}
