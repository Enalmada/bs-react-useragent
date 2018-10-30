# bs-react-useragent

## Introduction

Bucklescript + ReasonReact binding for [react-useragent](https://github.com/quentin-sommer/react-useragent) components. I write bindings when I needed them in my projects. 
If you find a component is missing, it's because I don't need it (yet).

Cautionary note that I am very new to bindings so confirmation and testing is necessary for anything you want to use as I only tested what I use.
** See [bs-ant-design](https://github.com/thangngoc89/bs-ant-design) repo for original credit on this pattern. **

## Installation
```
npm install --save bs-react-useragent
```

* Add `bs-react-useragent` to `bs-dependencies` in `bsconfig.json`.


## Usage
```
<UserAgent tablet=true> <p> {ReasonReact.string("This will only be rendered on tablet")} </p> </UserAgent>

<UserAgent mobile=true tablet=true><p> {ReasonReact.string("This will only be rendered on either mobile or tablet")}</p></UserAgent>

<UserAgent mobile=true tablet=true>
{
  (uaIsMobile, uaIsTablet) =>
    uaIsMobile || uaIsTablet ?
      <p> {ReasonReact.string("This will ONLY be rendered on mobile/tablet")} </p> 
      :
      <p> {ReasonReact.string("This will NOT be rendered on mobile/tablet")} </p>
}
</UserAgent>
```

## Components

I did the components I needed.  While I usually made an attempt to do all the params technically, I only tested the
ones I needed.  Assume you will need to test everything you want to use well.

## Contributions

All contributions are welcomed.  I intend to merge and release anything you push quickly.

## LICENSE

MIT
