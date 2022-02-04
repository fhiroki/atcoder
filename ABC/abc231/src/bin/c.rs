use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        q: usize,
        mut a: [u64; n],
        x: [u64; q]
    }
    a.sort();
    for i in 0..q {
        let p = match a.binary_search(&x[i]) {
            Ok(p) => p,
            Err(p) => p,
        };
        println!("{}", n - p);
    }
}
