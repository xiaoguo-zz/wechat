//
//  EditFriendsViewController.h
//  wechat
//
//  Created by Xiao Guo on 8/27/13.
//  Copyright (c) 2013 Xiao Guo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface EditFriendsViewController : UITableViewController

@property (nonatomic, strong) NSArray *allusers;
@property (nonatomic, strong) PFUser *currentUser;
@property (nonatomic, strong) NSMutableArray *friends;

-(BOOL)isFriend:(PFUser *)user;

@end
