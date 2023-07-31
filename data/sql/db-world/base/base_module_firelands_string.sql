SET @ENTRY:=100001;
DELETE FROM `firelands_string` WHERE `entry`=@ENTRY;
INSERT INTO `firelands_string` (`entry`, `content_default`, `locale_koKR`, `locale_frFR`, `locale_deDE`, `locale_zhCN`, `locale_zhTW`, `locale_esES`, `locale_esMX`, `locale_ruRU`) VALUES
(@ENTRY, 'Hello from Base Module!', '', '', '', '', '', '¡Hola desde el Módulo Base!', '¡Hola desde el Módulo Base!', '');
