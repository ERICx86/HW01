//
//  HWViewController.m
//  HelloWorld
//
//  Created by ERICx86 on 13-10-16.
//  Copyright (c) 2013年 ERICx86. All rights reserved.
//

#import "HWViewController.h"

@interface HWViewController ()

@end

@implementation HWViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)doBtnHide:(id)sender {
    //  [_lblHelloWorld setHidden:YES];
    [_lblHelloWorld setHidden: ![_lblHelloWorld isHidden]];
    [sender setTitle:[_lblHelloWorld isHidden]?@"Show":@"Hide" forState:UIControlStateNormal];
    
}

@end
