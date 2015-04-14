//
//  ViewController.h
//  week2tute
//
//  Created by double on 13/04/2015.
//  Copyright (c) 2015 double. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *firstFigure;

@property (strong, nonatomic) IBOutlet UITextField *secondFigure;

@property (strong, nonatomic) IBOutlet UILabel *resultLabel;

- (IBAction)plusButton;
- (IBAction)subtractButton;
- (IBAction)multiplyButton;
- (IBAction)devideButton;

@end

