/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MMThemeManagerExt.h"


@interface CShareResourceProvider : XXUnknownSuperclass <MMThemeManagerExt> {
}
+(id)GetFailReceiverImage;
+(id)GetFailSenderImage;
+(id)GetLocationReceiverImage;
+(id)GetLocationSenderImage;
+(id)GetLocationMessageReceiverContentBkgImage;
+(id)GetLocationMessageSenderContentBkgImage;
+(id)GetLocationMessageLabelBkgImage;
+(id)GetVideoMessageCoverImage;
+(id)GetMessageSenderCoverImage;
+(id)GetMessageReceiverCoverImage;
+(id)selfCreateImagePath;
+(float)GetTableViewSeperatorLineHeight;
+(id)GetContactIndexTitleColor;
+(id)GetLinkBtnWithTitle:(id)title image:(id)image;
+(id)GetLinkBtnWithTitle:(id)title;
+(id)GetTabBarSettingHLImage;
+(id)GetTabBarFFHLImage;
+(id)GetTabBarContactsHLImage;
+(id)GetTabBarMainFrameHLImage;
+(id)GetShadowLogoImage;
+(id)GetNavigationBarTintColor;
+(id)GetBlueButton;
+(id)GetGreenBigButton;
+(id)GetGreenButton;
+(id)GetBackGroundView;
+(id)GetBlackBackGroundView;
+(id)GetOperateBigFontSizeButton;
+(id)GetOperateBigButton;
+(id)GetOperateButton;
+(id)CreateBackGroundImageWithImage:(id)image;
+(id)GetGrayBlueColor;
+(id)GetLoginLinkColor;
+(id)GetSendMsgDisabledColor;
+(id)GetTableViewValueColor;
+(id)GetMessageNodeTimeColor;
+(id)GetMessageListTimeColor;
+(id)GetReturnButton:(id)button andRect:(CGRect)rect;
+(id)GetButtonWithTitle:(id)title normalImage:(id)image highlightImage:(id)image3 andRect:(CGRect)rect;
+(id)allocWithZone:(NSZone*)zone;
+(id)sharedCShareResourceProvider;
+(void)initialize;
-(void)onThemeChanged;
-(void)dealloc;
-(id)init;
@end

