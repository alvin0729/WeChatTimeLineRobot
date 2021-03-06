/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "EGORefreshTableHeaderView.h"

@class MMActivityIndicator, UIImageView;

@interface MMWebViewPullDownRefreshView : EGORefreshTableHeaderView {
	MMActivityIndicator* m_reflashImageView;
	UIImageView* m_tipBkg;
	BOOL _bIsDrag;
}
-(void).cxx_destruct;
-(void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)egoRefreshScrollViewDataSource;
-(void)egoRefreshScrollViewDidEndDragging:(id)egoRefreshScrollView;
-(void)egoRefreshScrollViewDidScroll:(id)egoRefreshScrollView;
-(void)onStateOfLoading;
-(void)onStateOfNormal;
-(void)onStateOfPulling;
-(id)initWithFrame:(CGRect)frame;
-(void)setFrame:(CGRect)frame;
-(void)setIsDragView:(BOOL)view;
@end

