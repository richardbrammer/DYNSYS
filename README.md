# DYNSYS
System Dynamics Toolkit

## Modeling language

The Dynsys modeling language describes quantitative System Dynamics models using stocks, flows and parameters.
The following tokens in the language are used to describe entitites in the model. 

`STOCK`
`FLOW`
`PARAMETER`

Every entity has a unique description used as identifier. It is written within double-quotes like `STOCK "Potential Adopters" 100`. The token `100` sets the initial quantitiy of the stock to 100 units (Dynsys is as of writing a unit-less model). 

Flows are edges between entities that may increase or decrease a stock. Their impact is described using the `TO` and `FROM` keywords together with the identifiers of a `STOCK` or `PARAMETER`. For example:

```
FLOW "New adopters" FROM "Potential adopters" TO "Adopters"
```

`FLOW`s and `PARAMETER`s may be influenced by another `FLOW` and/or `PARAMETER`. These influencing edges are described using indentation in a new line after the according entity. For example to describe a positive influence from `"Potential adopters"` to `"Innovators"` use the following notation:

```
PARAMETER "Innovators"
    positive FROM "Potential adopters"
```

## Requirements

### Get gcc for debian 9
```
$ sudo apt update
$ sudo apt install build-essential
```
### OR

### equivalent for macOS
```
$ export HOMEBREW_NO_ANALYTICS=1
$ brew update
$ brew upgrade
$ brew info gcc
$ brew install gcc
$ brew cleanup
$ gcc -v
```

## Test for gcc and make
```
$ which gcc
$ gcc -v
$ which make
$ make -v
```

[1]: https://discussions.apple.com/thread/8336714 
## Compile and Execute

```
$ chmod +x compile-and-execute.sh
$ ./compile-and-execute.sh
```

## Execute the binary

```
$ ./Dynsys
```


## Contribute
Feel free to contribute by creating tickets and pull requests.
