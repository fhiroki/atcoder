use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        s: String,
    }
    let v: Vec<i32> = s.chars().map(|c| c.to_digit(10).unwrap() as i32).collect();
    let diff: Vec<i32> = v.windows(2).map(|t| {
        let d = t[1] - t[0];
        if d == -9 {
            1
        } else {
            d
        }
    }).collect();

    if v.iter().all(|&x| v[0] == x) || diff.iter().all(|&x| x == 1) {
        println!("Weak");
    } else {
        println!("Strong");
    }
}
