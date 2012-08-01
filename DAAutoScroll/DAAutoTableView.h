//
//  DAAutoTableView.h
//  DAAutoScroll
//
//  Created by Daniel Amitay on 2/13/12.
//  Copyright (c) 2012 Daniel Amitay. All rights reserved.
//

#import <UIKit/UIKit.h>

#define DAAutoTableViewNotificationStoped @"DAAutoTableViewNotificationStoped"

@interface DAAutoTableView : UITableView
{
    NSTimer *_scrollTimer;
}

@property (nonatomic) CGFloat pointsPerSecond;
@property (nonatomic, getter = isScrolling) BOOL scrolling;
- (void)startScrolling;
- (void)stopScrolling: (BOOL) postNotification;

@end
