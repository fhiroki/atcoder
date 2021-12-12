use std::vec;

use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        m: usize,
        conditions: [(usize, usize); m],
        k: usize,
        balls: [(usize, usize); k],
    }

    let mut ans = 0;
    for bit in 0..(1 << k) {
        let mut plate = vec![0; n + 1];
        for x in 0..k {
            if (bit & (1 << x)) != 0 {
                plate[balls[x].1] += 1;
            } else {
                plate[balls[x].0] += 1;
            }
        }

        let mut count = 0;
        for (a, b) in conditions.iter() {
            if plate[*a] > 0 && plate[*b] > 0 {
                count += 1;
            }
        }
        if count > ans {
            ans = count;
        }
    }

    println!("{}", ans);
}
