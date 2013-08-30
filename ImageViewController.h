//
//  ImageViewController.h
//  wechat
//
//  Created by Xiao Guo on 8/29/13.
//  Copyright (c) 2013 Xiao Guo. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <Parse/Parse.h>

@interface ImageViewController : UIViewController

@property (nonatomic, strong) PFObject *message;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
