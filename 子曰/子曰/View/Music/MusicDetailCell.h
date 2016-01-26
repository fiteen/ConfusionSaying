//
//  MusicDetailCell.h
//  子曰
//
//  Created by Martell on 15/11/28.
//  Copyright © 2015年 Martell. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MImageView.h"
#import "DownloadMusicNetManager.h"

@protocol MusicDetailCellDelegate <NSObject>
- (void)tellmeProgress:(CGFloat)progress withCellTag:(NSInteger)tag;
@end
@interface MusicDetailCell : UITableViewCell <DownloadMusicNetManagerDelegate>
/** 音乐封面图 */
@property (nonatomic, strong) MImageView *coverIV;
/** 题目标签 */
@property (nonatomic, strong) UILabel *titleLb;
/** 添加时间标签 */
@property (nonatomic, strong) UILabel *timeLb;
/** 音乐来源标签 */
@property (nonatomic, strong) UILabel *sourceLb;
/** 播放次数标签 */
@property (nonatomic, strong) UILabel *playCountLb;
/** 喜欢次数标签 */
@property (nonatomic, strong) UILabel *favorCountLb;
/** 评论次数 */
@property (nonatomic, strong) UILabel *commentCountLb;
/** 时长标签 */
@property (nonatomic, strong) UILabel *durationLb;
/** 下载按钮 */
@property (nonatomic, strong) UIButton *downloadBtn;

/** 下载某行音频 */
- (void)downLoadMusicURL:(NSURL *)url;
@property (nonatomic,strong) DownloadMusicNetManager *dlmNetManager;
- (void)downloadPause;
- (void)downloadResume;
@property (nonatomic,assign) NSInteger startOrFinish;


@property (nonatomic, assign) id<MusicDetailCellDelegate> delegate;
@end
