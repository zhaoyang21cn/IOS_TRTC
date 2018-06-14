//
//  TCLiveChatTableView.h
//  TRTC
//
//  Created by ericxwli on 2018/6/3.
//  Copyright © 2018年 Tencent. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ImSDK/ImSDK.h>

@interface TCLiveChatTableView : UITableView

- (void)addChatMessage:(NSArray *)msgList withContentColor:(UIColor *)contentColor nickColor:(UIColor *)nickColor;
- (void)sendMessage:(NSString *)message;
@end
