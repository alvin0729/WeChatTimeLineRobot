/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, BaseRequest;

@interface JSAPIPreVerifyRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* signatureMethod;
@property(retain, nonatomic) NSString* signature;
@property(retain, nonatomic) NSString* noncestr;
@property(retain, nonatomic) NSString* timestamp;
@property(retain, nonatomic) NSMutableArray* jsapiList;
@property(retain, nonatomic) NSString* appid;
@property(retain, nonatomic) NSString* url;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end
