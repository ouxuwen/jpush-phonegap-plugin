//
//  PushTalkPlugin.h
//  PushTalk
//
//  Created by zhangqinghe on 13-12-13.
//
//

#import <Cordova/CDV.h>

@interface JPushPlugin : CDVPlugin{
  
}

-(void)setTagsWithAlias:(CDVInvokedUrlCommand*)command;
-(void)setTags:(CDVInvokedUrlCommand*)command;
-(void)setAlias:(CDVInvokedUrlCommand*)command;
-(void)getRegistrationID:(CDVInvokedUrlCommand*)command;
@end
