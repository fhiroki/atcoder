use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        mut k: usize,
        mut ab: [(usize, usize); n]
    }
    ab.sort_by(|a, b| a.0.cmp(&b.0));
    for i in 0..n {
        let d = if i == 0 {
            ab[0].0
        } else {
            ab[i].0 - ab[i - 1].0
        };
        if k >= d {
            k -= d;
            k += ab[i].1;
        } else {
            if i == 0 {
                println!("{}", k);
            } else {
                println!("{}", ab[i - 1].0 + k);
            }
            return;
        }
    }
    println!("{}", ab[n - 1].0 + k);
}
