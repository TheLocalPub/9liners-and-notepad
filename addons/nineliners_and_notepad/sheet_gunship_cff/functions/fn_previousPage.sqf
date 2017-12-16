
private _lP = (profileNamespace getVariable ["nln_gunship_cff_currentPage", -1]);

private _p = -1;
if (_lP <= -1) then
{
	_p = (["gunship_cff"] call nln_fnc_getLastPage);
}
else
{
	_p = (["gunship_cff", _lP] call nln_fnc_getPreviousPage);
};

if (_p > -1) then
{
	[_p] call nln_gunship_cff_fnc_updateMenu;
	profileNamespace setVariable ["nln_gunship_cff_currentPage", _p];

	private _pP = (["gunship_cff", _p] call nln_fnc_getPagePosition);
	hint format["Page %1/%2", (_pP select 0), (_pP select 1)];
}
else
{
	hint "No previous Pages.";
};
