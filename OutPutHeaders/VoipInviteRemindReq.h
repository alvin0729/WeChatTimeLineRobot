/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, BaseRequest;

@interface VoipInviteRemindReq : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned inviteType;
@property(retain, nonatomic) NSMutableArray* toUserNameList;
@property(assign, nonatomic) unsigned listCount;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

