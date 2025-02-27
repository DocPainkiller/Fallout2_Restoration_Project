#ifndef RPU_H
#define RPU_H

#define rpu_ini "mods\\rpu.ini"
#define sec_main "main"
#define rpu_setting(section, setting) get_ini_setting(rpu_ini + "|" + section + "|" + setting)
#define rpu_string(section, setting) get_ini_string(rpu_ini + "|" + section + "|" + setting)
#define rpu_msetting(setting) get_ini_setting(rpu_ini + "|" + sec_main + "|" + setting)

#define set_marcus_armor "marcus_armor"
#define set_dogmeat_armor "dogmeat_armor"
#define set_smoking "smoking"
#define set_lenny_look "lenny_new_look"
#define set_vault_boxer "vault_boxer"
#define set_cassidy_head "cassidy_head"
#define set_goris_derobing "goris_quick_derobing"

#define appearance_mod_enabled get_ini_setting("ddraw.ini|Misc|EnableHeroAppearanceMod")

procedure check_filesystem_override begin
  variable fs_override := get_ini_setting("ddraw.ini|Misc|UseFileSystemOverride");
  if fs_override != 1 then begin
    ndebug("UseFileSystemOverride is disabled");
    float_msg(dude_obj, SCRIPT_REALNAME + ": filesystem override was disabled, some features failed to load. Exit and re-launch the game to fix this", FLOAT_MSG_WARNING);
    return false;
  end
  return true;
end

#endif
