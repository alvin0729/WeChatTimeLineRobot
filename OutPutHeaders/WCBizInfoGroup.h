/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSArray, NSString, UILabel;

@interface WCBizInfoGroup : XXUnknownSuperclass {
	NSMutableArray* m_arrayItem;
	NSString* m_error;
	NSString* m_footerTip;
	NSString* m_headerTip;
	UILabel* m_tipLabel;
	NSString* m_footerTipsTitle;
	NSString* m_footerTipsContent;
}
@property(retain, nonatomic) NSString* m_footerTipsContent;
@property(retain, nonatomic) NSString* m_footerTipsTitle;
@property(retain, nonatomic) NSString* m_headerTip;
@property(retain, nonatomic) NSString* m_footerTip;
@property(retain, nonatomic) NSString* m_error;
@property(retain, nonatomic) NSArray* m_arrayItem;
-(void).cxx_destruct;
-(id)getTipLabel;
-(void)addItem:(id)item;
-(void)setError:(id)error;
-(void)dealloc;
-(id)initWithFooterTip:(id)footerTip footerTipTitle:(id)title footerTipsContent:(id)content headerTip:(id)tip error:(id)error;
-(id)initWithFooterTip:(id)footerTip headerTip:(id)tip error:(id)error;
@end

