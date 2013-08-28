//
//  LoginViewController.h
//  wechat
//
//  Created by Xiao Guo on 8/26/13.
//  Copyright (c) 2013 Xiao Guo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;

- (IBAction)login:(id)sender;

@end
