//
//  CTMediator+Home.h
//  MyApp
//
//  Created by 黄隆 on 16/9/27.
//  Copyright © 2016年 黄隆. All rights reserved.
//

#import "CTMediator.h"
#import <UIKit/UIKit.h>

@interface CTMediator (HomeAction)
- (UIViewController *)mediator_homeViewControllerWithParams:(NSDictionary *)dict;
@end
