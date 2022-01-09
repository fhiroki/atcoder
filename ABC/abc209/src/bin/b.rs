use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        x: usize,
        a: [usize; n]
    }
    if a.iter().sum::<usize>() - a.len() / 2 <= x {
        println!("Yes");
    } else {
        println!("No");
    }
}
