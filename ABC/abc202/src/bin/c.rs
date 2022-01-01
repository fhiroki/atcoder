use proconio::{fastout, input};
use std::collections::HashMap;

#[fastout]
fn main() {
    input! {
        n: usize,
        a: [usize; n],
        b: [usize; n],
        c: [usize; n],
    }
    let mut map = HashMap::new();
    for i in 0..n {
        *map.entry(a[i]).or_insert(0) += 1;
    }
    let mut ans: usize = 0;
    for i in 0..n {
        ans += map.get(&b[c[i] - 1]).unwrap_or(&0);
    }
    println!("{}", ans);
}
