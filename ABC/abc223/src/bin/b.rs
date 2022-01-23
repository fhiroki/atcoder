use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        mut s: String
    }
    let mut v = vec![];
    for _ in 0..s.len() {
        v.push(s.clone());
        let c = s.pop().unwrap();
        s.insert(0, c);
    }
    v.sort();
    println!("{}\n{}", v.first().unwrap(), v.last().unwrap());
}
