/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface AccountBindPhoneInfo : XXUnknownSuperclass <NSCoding> {
	NSString* m_nsTitle;
	NSString* m_nsDetail;
	unsigned long m_uiSafeRemindType;
	unsigned long m_uiMobileCanBeFoundShowPos;
	BOOL m_bForce;
}
@property(assign, nonatomic) BOOL m_bForce;
@property(assign, nonatomic) unsigned long m_uiMobileCanBeFoundShowPos;
@property(assign, nonatomic) unsigned long m_uiSafeRemindType;
@property(retain, nonatomic) NSString* m_nsDetail;
@property(retain, nonatomic) NSString* m_nsTitle;
-(void).cxx_destruct;
-(BOOL)isMobileCanBeFoundShowInFillPhoneViewController;
-(id)getHeadIcon;
-(void)ParseFromStyle:(id)style;
-(void)ParseFromXml:(id)xml;
-(id)init;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
@end
