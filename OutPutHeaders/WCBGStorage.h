/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface WCBGStorage : XXUnknownSuperclass {
	unsigned hash;
	NSMutableArray* albumList;
}
@property(retain, nonatomic) NSMutableArray* albumList;
@property(assign, nonatomic) unsigned hash;
+(id)fromBuffer:(id)buffer;
+(id)parseFromXml:(id)xml preferLang:(id)lang;
-(void).cxx_destruct;
-(id)toBuffer;
-(id)toXml;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)init;
@end
