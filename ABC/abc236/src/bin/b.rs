use proconio::{fastout, input};
use std::collections::HashMap;

#[fastout]
fn main() {
    input! {
        n: usize,
        a: [u32; 4*n-1]
    }
    let mut map = HashMap::new();
    for i in 0..4 * n - 1 {
        *map.entry(a[i]).or_insert(0) += 1;
    }
    for (k, v) in map {
        if v != 4 {
            println!("{}", k);
            return;
        }
    }
}
