/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface ReportLocationReq : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* cardId;
@property(retain, nonatomic) NSString* cardTpId;
@property(assign, nonatomic) unsigned reportScene;
@property(assign, nonatomic) double latitude;
@property(assign, nonatomic) double longitude;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

