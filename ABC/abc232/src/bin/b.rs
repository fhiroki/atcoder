use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        s: String,
        t: String
    }
    let v: Vec<i8> = s.chars().zip(t.chars()).map(|(a, b)| {
        let x = b as i8 - a as i8;
        if x >= 0 {
            x
        } else {
            x + 26
        }
    }).collect();

    if v.iter().all(|&x| x == v[0]) {
        println!("Yes");
    } else {
        println!("No");
    }
}
