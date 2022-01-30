use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        x: usize,
        a: [usize; n]
    }
    let mut v = vec![0; n];
    let mut t = x - 1;
    loop {
        if v[t] == 1 {
            break;
        }
        v[t] = 1;
        t = a[t] - 1;
    }
    println!("{}", v.iter().sum::<i32>());
}
