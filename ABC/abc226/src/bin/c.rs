use std::vec;

use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize
    }
    let mut v = vec![];
    for _ in 0..n {
        input! {
            t: u64,
            k: usize,
            a: [usize; k]
        }
        v.push((t, k, a));
    }
    let mut ans = v[n - 1].0;
    let mut done = vec![0; n];
    let mut queue = v[n - 1].2.clone();
    while !queue.is_empty() {
        let i = queue.pop().unwrap() - 1;
        if done[i] == 1 {
            continue;
        }
        done[i] = 1;
        ans += v[i].0;
        for j in 0..v[i].1 {
            queue.push(v[i].2[j]);
        }
    }
    println!("{}", ans);
}
