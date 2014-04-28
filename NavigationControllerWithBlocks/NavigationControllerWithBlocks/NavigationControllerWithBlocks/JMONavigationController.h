//
//  JMONavigationController.h
//  NavigationControllerWithBlocks
//
//  Created by Jerome Morissard on 4/26/14.
//  Copyright (c) 2014 Jerome Morissard. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JMONavigationController : UINavigationController

- (void)superPushViewController:(UIViewController *)viewController animated:(BOOL)animated;
- (UIViewController *)superPopViewControllerAnimated:(BOOL)animated;

@end
