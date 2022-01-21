use itertools::Itertools;
use std::cmp::max;
use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: String
    }
    let mut ans = 0;
    let x = (n.len() as f32 / 2.0).ceil() as usize;
    for perm in n.chars().permutations(n.len()) {
        let a = perm[0..x].iter().collect::<String>().parse::<u32>().unwrap();
        let b = perm[x..n.len()].iter().collect::<String>().parse::<u32>().unwrap();
        ans = max(ans, a * b);
    }
    println!("{}", ans);
}
